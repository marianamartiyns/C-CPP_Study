#include <iostream>
#include <1stdio.h>
#include <string.h>

#define TAM_NOME 40
#define TAM_TITULO 100
#define TAM_DATA 9
#define MAX_LIVROS 100

using std::cin;
using std::cout;
using std::endl;

using namespace std;

class autor {
	char nome[TAM_NOME];
	int idade;
	char nacionalidade[2];
public:
	autor(const char* no, int i, const char* na) {
		strcpy(nome, no);
		idade = i;
		strcpy(nacionalidade, na);
	}
	char* get_nome() {
		return nome;
	}
	void set_nome(char* no) {
		strcpy(nome, no);
	}
	int get_idade() { return idade; }
	void set_idade(int i) { idade = i; }
	char* get_nacionalidade() { return nacionalidade; }
	void set_nacionalidade(char* na) {
		strcpy(nacionalidade, na);
	}
	void print_info() {
                cout << "Nome: " << get_nome() << endl;
                cout << "Idade: " << get_idade() << endl;
                cout << "Nacionalidade: " << get_nacionalidade() << endl;		
	}
};

class livro {
	char titulo[TAM_TITULO];
	int ano_lancamento;
	int isbn;
	autor** autores;
	int qtd_autores;
public:
	livro(const char* t, int al, int is, autor** au, int qtd_au) {
		strcpy(titulo, t);
		ano_lancamento = al;
		isbn = is;
		autores = au;
		qtd_autores = qtd_au;
	}
	char* get_titulo() {
		return titulo;
	}
	void set_titulo(char* t) {
		strcpy(titulo, t);
	}
	int get_ano_lancamento() {
		return ano_lancamento;
	}
	void set_ano_lancamento(int al) {
		ano_lancamento = al;
	}
	int get_isbn() {
		return isbn;
	}
	void set_isbn(int i) {
		isbn = i;
	}
	autor** get_autores() {
		return autores;
	}
	int get_qtd_autores() {
		return qtd_autores;
	}
	void set_autores(autor** au, int qtd_au) {
		autores = au;
		qtd_autores = qtd_au;
	}
	void print_info() {
		cout << "Titulo: " << titulo << endl;
		cout << "Ano lancamento: " << ano_lancamento << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "Autores: " << endl;
		for (int i = 0; i < qtd_autores; i++) {
			autores[i]->print_info();
		}
	}

};

class leitor {
	char nome[TAM_NOME];
	int idade;
	int cpf;
public:
	leitor(const char* n, int i, int c) {
		strcpy(nome, n);
		idade = i;
		cpf = c;
	}
	char* get_nome() {
		return nome;
	}
	void set_nome(char* n) {
		strcpy(nome, n);
	}
	int get_idade() {
		return idade;
	}
	void set_idade(int i) {
		idade = i;
	}
	int get_cpf() {
		return cpf;
	}
	void set_cpf(int c) {
		cpf = c;
	}
	void print_info() {
                cout << "Nome: " << get_nome() << endl;
                cout << "Idade: " << get_idade() << endl;
		cout << "Cpf: " << get_cpf() << endl;
	}
};

class emprestimo {
	char data_inicio[TAM_DATA];
	char data_fim[TAM_DATA];
	livro** livros;
	int qtd_livros;
	leitor* cliente;
public:
	emprestimo(const char* di, const char* df, livro** ls, int qtdl, leitor* c) {
		strcpy(data_inicio, di);
		strcpy(data_fim, df);
		livros = ls;
		qtd_livros = qtdl;
		cliente = c;
	}
	void print_info() {
		cout << "Data inicio: " << data_inicio << endl;
		cout << "Data fim: " << data_fim << endl;
		cout << "Livros: " << endl;
		for (int i = 0; i < qtd_livros; i++) {
			livros[i]->print_info();
		}
		cout << "Cliente: " << endl;
		cliente->print_info();
	}
};

class acervo {
	//MELHORAR USANDO VECTOR
	livro* estoque[MAX_LIVROS];
	int copias_disponiveis[MAX_LIVROS];
	int copias_emprestadas[MAX_LIVROS];
	int last_index;
public:
	void add_livro(livro* l) {
		estoque[last_index] = l;
		last_index++;
	}

	void remove_livro(int i) {
		//TBD
	}
};

int main(void) {
	/*
		Exercicio:
		Solicitar dados do usuario para que seja
		criado um emprestimo de dois livros; cada
		livro devera ter dois autores distintos;
		o emprestimo devera conter tambem o leitor;
	*/
/*
	int idade;

	//printf("Insira a idade do autor: ");
	std::cout << "Insira a idade do autor: ";
	//scanf("%d", &idade);
	std::cin >> idade;
	//printf("Idade inserida: %d\n", idade);
	std::cout << "Idade inserida: " << idade << std::endl;
*/

/*
	autor a1("XYZ", 99, "BR");
	autor a2("ZWX", 88, "PT");
	autor a3("KZW", 77, "IT");

	autor* au1[3];
	au1[0] = &a1;
	au1[1] = &a2;
	au1[2] = &a3;

	livro li1("Titulo Livro 1", 1980, 3865634, au1, 3);

	livro* lis1[1];

	lis1[0] = &li1;

	leitor le1("MKL", 16, 456478656);

	emprestimo e1("01012023", "31122023", lis1, 1, &le1);

	e1.print_info();
*/
	return 0;
}
