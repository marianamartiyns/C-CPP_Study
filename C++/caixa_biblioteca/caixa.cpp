#include <iostream>
#include <stdio.h>

class coisa {
	double massa;
public:
	coisa(double m) {
		massa = m;
		printf("Coisa criada: %f\n", massa);
	}
	coisa(coisa& cc) {
		massa = cc.get_massa();
		printf("Coisa copiada: %f\n", massa);
	}

	~coisa() {
		printf("Coisa finalizada\n");
	}
	double get_massa() { return massa; }
	void set_massa(double m) { massa = m; }
	void print_info() {
		printf("Coisa: %f\n", massa);
	}
};

class caixa {
	double base;
	double altura;
	int material;
	coisa* c;
public:
	caixa(double b = 1, double a = 1, int m = 0, double mm = 0) {
		base = b;
		altura = a;
		material = m;
		c = new coisa(mm);
		printf("Caixa criada (%f, %f, %d)\n", base, altura, material);
	}

	caixa(double b = 1, double a = 1, int m = 0, coisa* cc = NULL) {
		base = b;
		altura = a;
		material = m;
		c = cc;
		printf("Caixa criada (%f, %f, %d)\n", base, altura, material);
	}

	~caixa() {
		delete c;
		printf("Caixa finalizada (%f %f %d)\n", base, altura, material);
	}

	double get_base() { return base; }
	double get_altura() { return altura; }
	int get_material() { return material; }
	coisa* get_coisa() { return c; }

	void set_base(double b) { base = b; }
	void set_altura(double a) { altura = a; }
	void set_material(int m) { material = m; }
	void set_coisa(coisa* cc) { c = cc; }

	void print_info() {
		printf("Caixa (%f, %f, %d)\n", base, altura, material);
		if (c != NULL)
			c->print_info();
	}
};

void zera_caixa_ptr(caixa* cc) {
	cc->set_base(1);
	cc->set_altura(1);
	cc->set_material(0);
	cc->set_coisa(NULL);
}

void zera_caixa_ref(caixa& cc) {
	cc.set_base(1);
	cc.set_altura(1);
	cc.set_material(0);
	cc.set_coisa(NULL);
}


int main() {


	//CONSTRUTOR DE COPIA
	coisa co001(7.8);

	coisa co002 = co001;

	coisa co003(co001);

	co002.set_massa(100.5);

	co001.print_info();
	co002.print_info();
	co003.print_info();


/*
	//METODOS DESTRUTORES

	caixa c001(10.1, 9.8, 6, 0.9);
	caixa c002(9.1, 7.6, 5, 0.5);

	caixa* pc001 = new caixa(9.7, 5.4, 7, 3.1);

	delete pc001;
*/


/*
	//REFERENCIAS x PONTEIROS

	caixa c00(6.5, 14.8, 5, 7.7);
	zera_caixa_ptr(&c00);
	c00.print_info();

	caixa c01(5.6, 11.1, 8, 5.1);
	zera_caixa_ref(c01);
	c01.print_info();
*/

/*
	//METODOS CONSTRUTORES
	//decl. estatica e decl. dinamica

	coisa co1(7.8);

	caixa c1(1.2, 2.2, 8, &co1); //decl. estatica
	c1.print_info();

	caixa c2(3.4, 5.2, 7, 10.98); //decl. estatica
	c2.print_info();

	caixa c3(4.9, 2.2); //decl. estatica
	c3.print_info();

	caixa c4; //decl. estatica
	c4.print_info();

	caixa *pc1;
	//pc1 = (caixa*) malloc(sizeof(caixa)); //nao recomendado
	pc1 = new caixa(co1, 2.2, 9.7, 0); //decl. dinamica
	pc1->print_info();

	delete pc1;
*/
	return 0;
}






