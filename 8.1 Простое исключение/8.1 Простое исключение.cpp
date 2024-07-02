#include <iostream>
#include <excpt.h>

class MySuperException : public std::domain_error
{
public:
    MySuperException(std::string text) :std::domain_error(text) {}
};

int function(std::string str, int forbidden_length)
{
    int count = str.length();




    if (count == forbidden_length) {
        throw MySuperException("Вы ввели слово запретной длины");
    }


    return count;
}






int main() {
    //_setmode(_fileno(stdout), _O_U16TEXT);

    setlocale(LC_ALL, "rus");
    std::string text;
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    int res;
    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> text;
        try
        {

            res = function(text, forbidden_length);

        }
        catch (MySuperException ex)
        {
            std::cout << ex.what() << std::endl;
            std::cout << "До свидания!" << std::endl;
            return 12;
        }

        std::cout << "Длина слова \"" << text << "\" равна " << res << std::endl;
    }








    return 0;

}