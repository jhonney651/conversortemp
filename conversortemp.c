#include <ncurses.h>

int main() {
    float fahrenheit, celsius;
    initscr();
    printw("Conversor de Temperatura de Fahrenheit para graus Celsius\n\n");
    printw("Informe a temperatura em graus Fahrenheit: ");
    scanw("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * (5.0 / 9.0);
    printw("A temperatura em graus Celsius eh: %.2f", celsius);
    refresh();
    getch();
    endwin();
    return 0;
}
