import cv2
import numpy as np

# Carregue a imagem-
image = cv2.imread(r'C:\Users\tec56\OneDrive\Documents\TrabalhoCalculo\img2.jpg', cv2.IMREAD_GRAYSCALE)

# Calcule as derivadas usando o operador de Sobel
sobelx = cv2.Sobel(image, cv2.CV_64F, 1, 0, ksize=3)
sobely = cv2.Sobel(image, cv2.CV_64F, 0, 1, ksize=3)

# Calcule a magnitude do gradiente
gradient_magnitude = np.sqrt(sobelx**2 + sobely**2)

# Normalizar para o intervalo 0-255
gradient_magnitude = np.uint8(255 * gradient_magnitude / np.max(gradient_magnitude))

# Salve a imagem de saída
cv2.imwrite('sobel_output.jpg', gradient_magnitude)