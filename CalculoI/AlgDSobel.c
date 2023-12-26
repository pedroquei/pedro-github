#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char** argv) {
    // Carregue a imagem em escala de cinza
    cv::Mat image = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);

    // Verifique se a imagem foi carregada corretamente
    if(image.empty()) {
        printf("Não foi possível abrir ou encontrar a imagem\n");
        return -1;
    }

    cv::Mat grad_x, grad_y;
    cv::Mat abs_grad_x, abs_grad_y, dst;

    // Calcule o gradiente em X e Y respectivamente
    int scale = 1;
    int delta = 0;
    int ddepth = CV_16S;

    cv::Sobel(image, grad_x, ddepth, 1, 0, 3, scale, delta, cv::BORDER_DEFAULT);
    cv::convertScaleAbs(grad_x, abs_grad_x);

    cv::Sobel(image, grad_y, ddepth, 0, 1, 3, scale, delta, cv::BORDER_DEFAULT);
    cv::convertScaleAbs(grad_y, abs_grad_y);

    // Calcule a magnitude do gradiente
    cv::addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, dst);

    // Exiba a imagem original e a imagem do gradiente
    cv::namedWindow("Original Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Original Image", image);

    cv::namedWindow("Sobel Gradient", cv::WINDOW_AUTOSIZE);
    cv::imshow("Sobel Gradient", dst);

    cv::waitKey(0);
    return 0;
}
