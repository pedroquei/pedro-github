from manim import *

class DerivativeScene(Scene):
    def construct(self):
        # Define a função de custo
        def cost_function(x):
            return 3 * x**2 + 5 * x + 10

        # Cria o eixo e a curva da função
        axes = Axes(
            x_range=[0, 15],
            y_range=[0, 300],
            axis_config={"color": BLUE},
        )

        graph = axes.plot(lambda x: cost_function(x), color=WHITE)

        # Adiciona os elementos à cena
        self.play(Create(axes), Create(graph))

        # Adiciona uma linha vertical em x=10
        vertical_line = axes.get_vertical_line(10, color=YELLOW)
        self.play(Create(vertical_line))

        # Adiciona um ponto na curva correspondente a x=10
        dot = Dot().move_to(graph.point_from_proportion(0.5))
        self.play(Create(dot))

        # Adiciona rótulos aos eixos
        x_label = axes.get_x_axis_label("Tamanho da Entrada (x)")
        y_label = axes.get_y_axis_label("Custo")
        self.play(Create(x_label), Create(y_label))

        # Calcula a derivada em x=10
        derivative_value = cost_function(10)
        derivative_label = MathTex(r"\frac{d}{dx}C(x)\Bigr|_{x=10} =", f"{derivative_value}").next_to(dot, RIGHT)

        # Adiciona o rótulo da derivada
        self.play(Create(derivative_label))
        self.wait(2)