#pragma once
/**
	@file Product.h
	@brief ������������ ���� ������ Product
	@copyright ����
	@author ������ �.�.
	@date 22 - 05 - 2024
	@version 1.0.0
\�a� ���������� ������ :
	@ref Product
\��r �������� ����� :
	@ref Product.h
	@ref Product.cpp
* /
/// ����� �������� ��������
/** �������� ������ �������� � ������ ��� ������ � ���� */
class Product
{
protected:
	char *_name; ///<������������
	char *_namep; ///<�������������
	int _count; ///<����
	int _srok; ///<���� ��������
	int _kol; ///<����������
public:
	/// ����������� �� �� ���������
	/** ������� ������� ��� ������������� �����
	*/
	Product(void);
	/// ����������� � ����������� ����� ������
	/** ������� ������� � �������������� �� ����
	\param name - ����������� ��������
	\param namep - ����������� �������������
	\param count - ����
	\param srok - ���� ��������
	\param kol - ����������
	*/
	Product(char* _name, char* _namep, int _count, int _srok, int _kol);

	/// ���������� ����������� �������
	~Product(void);
	
	/// ������ ������� ��� ��������� ������������
	char* spistovdlynaim(char* name, char* namep);
	///  ������ ������� ��� ��������� ������������, ���� ������� �� ��������� ���������
	char* spistovdlynaimcount(char* name, char* namep, int _count);
	///  ������ �������, ���� �������� ������� ������ ���������
	char* spistovdlynaimsrok(char* name, char* namep, int _srok);
};

