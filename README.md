<div align='center'>
<h1> The C - Printf Project <img src = "https://raw.githubusercontent.com/MartinHeinz/MartinHeinz/master/wave.gif" width = 50px></h1>
  <h3> ¡we have created our own printf function! <br> we invite you to continue reading our project </h3>
  </div>
<div align='center'>
  <img src = "https://www.gifsanimados.org/data/media/118/robot-imagen-animada-0051.gif" width = 100px>
  </div>
<h2> objetive <img src = "https://media2.giphy.com/media/QssGEmpkyEOhBCb7e1/giphy.gif?cid=ecf05e47a0n3gi1bfqntqmob8g9aid1oyj2wr3ds3mg700bl&rid=giphy.gif" width = 32px> </h2>

<img width="55%" align="right" alt="Github" src="https://media.giphy.com/media/L1R1tvI9svkIWwpVYr/giphy.gif" />

- 🔭 The goal of this project in developing our own function (printf) is to fully understand how code works and to significantly understand the value of being a programmer.

<h2> _PRINTF <img src = "https://media.giphy.com/media/IbgaMPs8P7Y4hQe6yh/giphy.gif" width = 32px> </h2>

- 💬 To describe our function we will start by saying that it is made inspired by the original function (printf), but of which I will explain its usefulness and give you some examples of how to test our function in your code.

- 💻 <b> ¿What is it and what is it for? .. </b>

- The _printf function is a functionality that allows us to print messages on the user's screen, which can be used to display characters, strings, numbers, data, etc.
Of which for this we will need some specifiers that I will show you next.

- 💻 <b> Syntax .. </b>

- In the control chain the specifier of the data output format must be indicated, it can also have ordinary text and the escape sequence.
this string of characters must be enclosed in double quotes.
Format of the format string
the  characters are copied verbatim into the function's output, but the format specifiers, which start with a % character, indicate the
location and method of translating data (such as a number) into characters.

- 📌 <b> specifiers .. </b>

- 🛠 [%c] - If there is no l modifier present, the int argument is converted to an unsigned character and the resulting character is written.

- 🛠 [%s] - If no l modifier is present, the const char * argument is expected to be a pointer to an array of character type (pointer to a string).
Characters from the array are written up to a terminating null byte (' ').

- 🛠 [%%] - Print the % character.

- 🛠 [%d]-[%i] - The int argument is converted to signed decimal notation. The precision, if any, gives the minimum number of digits that  must  appear;
if the converted value requires fewer digits, it is padded on the left with zeros.

- 🤖 <b> How to use them .. </b>

- ✅ Add the library "holberton.h"
- ✅ Create a file "main.c"
- ✅ Identify the specifier and functionality for which you will use our function.
- ✅ Code it as in the following example.
- ✅ To show the output compile it with the following flags
- gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
- ✅ Run it with
- ./a.out

<h2> Example <img src = "https://media2.giphy.com/media/QssGEmpkyEOhBCb7e1/giphy.gif?cid=ecf05e47a0n3gi1bfqntqmob8g9aid1oyj2wr3ds3mg700bl&rid=giphy.gif" width = 32px> </h2>

- ⏪ <b> INPUT .. </b>
<prev>
{
    #include "holberton.h" <br>
    int main(void) <br>

    char character = 'H';
    char *name = "Holberton";
    int year = 2021;
    char percentage = '%';

    _printf("initial letter: %c\n", character);
    _printf("The school is: %s\n", name);
    _printf("year: %i\n", year);
    _printf("sign percentage is: %%\n", percentage);
    return (0);
}
</prev>

- ⏩ <b> OUTPUT .. </b>
<prev>
    initial letter: H <br>
    The school is: Holberton <br>
    year: 2021 <br>
    sign percentage is: % <br>
</prev>

<h2> contributors <img src='https://raw.githubusercontent.com/ShahriarShafin/ShahriarShafin/main/Assets/handshake.gif' width="100px"> </h2>
Luisa Pinillos <a href = 'https://www.twitter.com/@Luipv_20'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a> <br>
Laura Caicedo <a href = 'https://www.twitter.com/@LauSCaicedo'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a>

<h2> The end <br> ¡Thank you! <img src = "https://media.giphy.com/media/CEHtFH3rJ6xdhBUKIT/giphy.gif" width = 32px> </h2>
