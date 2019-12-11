#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

class Emprestimo{
    public:
        Emprestimo(){

        }
        ~Emprestimo();
        double getId() const             { return this->id; }
        double getCpf() const            { return this->cpf; }
        double getId_livro() const       { return this->id_livro;}
        int getDiaDataEmprestimo() const { return this->diaDataEmprestimo;}
        int getMesDataEmprestimo() const { return this->mesDataEmprestimo;}
        int getAnoDataEmprestimo() const { return this->anoDataEmprestimo;}
        int getDiaDataDevolucao() const  { return this->diaDataDevolucao; }
        int getMesDataDevolucao() const  { return this->mesDataDevolucao; }
        int getAnoDataDevolucao() const  { return this->anoDataDevolucao; }
        int getDiaDataDevolvido() const  { return this->diaDataDevolvido; }
        int getMesDataDevolvido() const  { return this->mesDataDevolvido; }
        int getAnoDataDevolvido() const  { return this->anoDataDevolvido; }
        bool getDevolvido() const { return this->devolvido; }

        //setters
        void setId(double value)            { this->id = value;}
        void setCpf(double value)           { this->cpf = value;}
        void setId_livro(double value)      { this->id_livro = value;}
        void setDiaDataEmprestimo(int value){ this->diaDataEmprestimo = value; }
        void setMesDataEmprestimo(int value){ this->mesDataEmprestimo = value; }
        void setAnoDataEmprestimo(int value){ this->anoDataEmprestimo = value; }
        void setDiaDataDevolucao(int value) { this->diaDataDevolucao = value;  }
        void setMesDataDevolucao(int value) { this->mesDataDevolucao = value;  }
        void setAnoDataDevolucao(int value) { this->anoDataDevolucao = value;  }
        void setDiaDataDevolvido(int value) { this->diaDataDevolucao = value;  }
        void setMesDataDevolvido(int value) { this->mesDataDevolvido= value;   }
        void setAnoDataDevolvido(int value) { this->anoDataDevolvido = value;  }
        void setDevolvido(bool value)       { this->devolvido = value;}

private:
    double id;
    double cpf;
    double id_livro;

    int diaDataEmprestimo;
        int mesDataEmprestimo;
        int anoDataEmprestimo;

        int diaDataDevolucao;
        int mesDataDevolucao;
        int anoDataDevolucao;

        int diaDataDevolvido;
        int mesDataDevolvido;
        int anoDataDevolvido;

        bool devolvido;

};

#endif // EMPRESTIMO_H
