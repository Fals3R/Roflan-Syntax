// Just a very small set of roflan-defines
// Created by Fals3R

#pragma once

#define ���������� unsigned
#define ������� void
#define ��� int
#define ���� double
#define ����� float
#define ���� long
#define ����� std::string
#define ������ std::wstring

#define ������ {
#define ����� }

#define ���������� return
#define ������ true
#define ���� false

#define ��������� public
#define ��������� private
#define ���������� protected
#define ��������� static
#define ���������� inline

#define ���� if
#define ����� else

#define ��� for

#define ���� +
#define ����� -
#define �������� *
#define ������ /
#define ������� %
#define ����� =
#define ������� =
#define ��������� +=
#define ������ -=
#define ���������_�� /=
#define ��������_�� *=
#define ��������� ;

#define ���������(var) var;

#define ����(var) setlocale(LC_ALL, var);

#define ��������_�_�������(...) printf(__VA_ARGS__);

#define �����(time) Sleep(time);

#define �������(var, var2) var % var2
#define ������(var) var % 2 == 0
#define ��������_�_�������(var, var2) pow(var, var2);
#define ������_�����(var) abs(var);

#define ���(freq, dur) Beep(freq, dur);

#define ����������_���������(var) SetConsoleCP(var);
#define ����������_���������_������(var) SetConsoleOutputCP(var);

#define ��������_�����_�����_�_��������_�(var) std::getline(std::cin, var);
#define ��������_������_�����_�_��������_�(var) std::getline(std::wcin, var);

#define �����_������(var) var.length() < 1
#define ������_��������(var) var.c_str()
#define �����������_�����(var) std::reverse(var.begin(), var.end());

#define �������(var) system(var);
#define ����� �������("pause")

#define ����� exit(1);