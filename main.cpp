#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	Cliente cliente0(
		"Thales",
		"Rua dos Pré-Socráticos",
		"Miletus",
		"Ionia",
		"548 a.C."
	);

	Cliente cliente1(
		"Aristóteles",
		"Avenida do Meio-Termo",
		"Atenas",
		"Ática",
		"384 a.C."
	);

	Cliente cliente2(
		"Platão",
		"Praça das Formas",
		"Atenas",
		"Ática",
		"348 a.C"
	);

	Cliente cliente3(
		"Sócrates",
		"Rua do Elenchus",
		"Atenas",
		"Ática",
		"399 a.C."
	);

	Cliente cliente4(
		"Pitágoras",
		"Praça dos Quadrados dos Catetos",
		"Samos",
		"Egeu",
		"571 a.C."	
	);

	Cliente cliente5(
		"Parmênides",
		"Rua do Não Ser",
		"Eleia",
		"Magna Grécia",
		"460 a.C."
	);

	Cliente cliente6(
		"Empédocles",
		"Rua dos Quatro Elementos",
		"Agrigento",
		"Sicília",
		"495 a.C."
	);

	Cliente cliente7(
		"Anaxágoras",
		"Avenida da Mente Cósmica",
		"Clazômenas",
		"Jónia",
		"499 a.C."
	);

	std::vector<EncomendaNormal> encomendasNormais;
	std::vector<EncomendaRelampago> encomendasRelampago;

	EncomendaNormal encomenda0(
		5,
		12,
		cliente0,
		cliente1
	);
	encomendasNormais.push_back(encomenda0);

	EncomendaNormal encomenda1(
		10,
		12,
		cliente1,
		cliente2
	);
	encomendasNormais.push_back(encomenda1);

	EncomendaNormal encomenda2(
		7,
		12,
		cliente2,
		cliente3
	);
	encomendasNormais.push_back(encomenda2);

	EncomendaNormal encomenda3(
		2,
		12,
		cliente3,
		cliente4
	);
	encomendasNormais.push_back(encomenda3);

	EncomendaNormal encomenda4(
		3,
		12,
		cliente4,
		cliente5
	);
	encomendasNormais.push_back(encomenda4);

	EncomendaRelampago encomenda5(
		13,
		18,
		cliente5,
		cliente6
	);
	encomendasRelampago.push_back(encomenda5);

	EncomendaRelampago encomenda6(
		6,
		18,
		cliente6,
		cliente7
	);
	encomendasRelampago.push_back(encomenda6);

	EncomendaRelampago encomenda7(
		8,
		18,
		cliente7,
		cliente0
	);
	encomendasRelampago.push_back(encomenda7);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double valorTotalEncNormais = 0;
	double valorTotalEncRelampago = 0;

	for(auto encomenda : encomendasNormais) {
		encomenda.print();
		std::cout << std::endl;
		valorTotalEncNormais += encomenda.calculaCustoTotal();
	}

	for(auto encomenda : encomendasRelampago) {
		encomenda.print();
		std::cout << std::endl;
		valorTotalEncRelampago += encomenda.calculaCustoTotal();
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendasNormais.size()
		 << "\nValor Total: " << valorTotalEncNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendasRelampago.size()
		 << "\nValor Total: " << valorTotalEncRelampago
		 << std::endl;
}