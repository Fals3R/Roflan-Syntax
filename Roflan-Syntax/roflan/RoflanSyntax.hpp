// Just a very small set of roflan-defines
// Created by Fals3R

#pragma once

#define абсолютный unsigned
#define пустота void
#define инт int
#define дабл double
#define флоат float
#define лонг long
#define текст std::string
#define юникод std::wstring

#define начало {
#define конец }

#define возвратить return
#define истина true
#define ложь false

#define публичный public
#define приватный private
#define защищённый protected
#define статичный static
#define внутренний inline

#define если if
#define иначе else

#define для for
#define пока while

#define плюс +
#define минус -
#define умножить *
#define делить /
#define процент %
#define равно =
#define равного =
#define прибавить +=
#define отнять -=
#define разделить_на /=
#define умножить_на *=
#define закончить ;

#define выполнить(var) var;

#define язык(var) setlocale(LC_ALL, var);

#define написать_в_консоль(...) printf(__VA_ARGS__);

#define ждать(time) Sleep(time);

#define остаток(var, var2) var % var2
#define чётное(var) var % 2 == 0
#define возвести_в_степень(var, var2) pow(var, var2);
#define модуль_числа(var) abs(var);

#define бип(freq, dur) Beep(freq, dur);

#define установить_кодировку(var) SetConsoleCP(var);
#define установить_кодировку_вывода(var) SetConsoleOutputCP(var);

#define получить_текст_ввода_и_записать_в(var) std::getline(std::cin, var);
#define получить_юникод_ввода_и_записать_в(var) std::getline(std::wcin, var);

#define текст_пустой(var) var.length() < 1
#define массив_символов(var) var.c_str()
#define перевернуть_текст(var) std::reverse(var.begin(), var.end());

#define консоль(var) system(var);
#define пауза консоль("pause")

#define выход exit(1);