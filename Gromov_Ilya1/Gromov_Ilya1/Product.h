#pragma once
/**
	@file Product.h
	@brief Заголовочный файл класса Product
	@copyright ВоГу
	@author Громов И.А.
	@date 22 - 05 - 2024
	@version 1.0.0
\рaг Использует классы :
	@ref Product
\раr Содержит класс :
	@ref Product.h
	@ref Product.cpp
* /
/// Класс описания продукта
/** Содержит данные продукта и методы для работы с ними */
class Product
{
protected:
	char *_name; ///<Наименование
	char *_namep; ///<Производитель
	int _count; ///<Цена
	int _srok; ///<Срок хранения
	int _kol; ///<Количество
public:
	/// Конструктор по по умолчанию
	/** Создает продукт без инициализации полей
	*/
	Product(void);
	/// Конструктор с заполнением полей класса
	/** Создает продукт и инициализирует ее поля
	\param name - наимнование продукта
	\param namep - наимнование производителя
	\param count - цена
	\param srok - срок хранения
	\param kol - количество
	*/
	Product(char* _name, char* _namep, int _count, int _srok, int _kol);

	/// Деструктор освобождает ресурсы
	~Product(void);
	
	/// список товаров для заданного наименования
	/** Принимает наименование и выдает список товаров
	\param name - наименование
	*/
	char* spistovdlynaim(char* name, char* namep);
	///  список товаров для заданного наименования, цена которых не превышает указанной
	/** Принимает наименование,цену и выдает список товаров, цена которых не превышает указанной
	\param name - наименование
	\param count - цена
	*/
	
	char* spistovdlynaimcount(char* name, char* namep, int _count);
	///  список товаров, срок хранения которых больше заданного
	/** Принимает наименование,срок и выдает список товаров, срок которых не превышает указанной
	\param name - наименование
	\param srok - срок
	*/
	char* spistovdlynaimsrok(char* name, char* namep, int _srok);
};

