#ifndef BIBLIOTECADC_H
#define BIBLIOTECADC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BibliotecaDC; }
QT_END_NAMESPACE

class BibliotecaDC : public QMainWindow
{
    Q_OBJECT

public:
    BibliotecaDC(QWidget *parent = nullptr);
    ~BibliotecaDC();

private slots:
    void on_btnAcervoCadastrar_clicked();

    void on_tblAcervoLivros_cellClicked(int row, int column);

    void on_btnAcervoEditar_clicked();

    void on_btnAcervoLimpar_clicked();

    void on_btnAcervoExcluir_clicked();

    void on_tblUsuarioUsuario_cellClicked(int row, int column);

    void on_btnUsuarioLimpar_clicked();

    void on_btnUsuarioExcluir_clicked();

    void on_btnUsuarioCadastrar_clicked();

    void on_btnUsuarioEditar_clicked();

    void on_btnEmprestimoPesquisarUsuario_clicked();

    void on_btnEmprestimoPesquisarLivro_clicked();

    void on_txtEmprestimoCpf_returnPressed();

    void on_btnEmprestimoLimpar_clicked();

    void on_btnEmprestimoEmprestar_clicked();

    void on_btnEmprestimoDevolver_clicked();

    void on_tblEmprestimoEmprestimo_cellActivated(int row, int column);

    void on_tblEmprestimoEmprestimo_cellClicked(int row, int column);

    void on_tblUsuarioUsuario_cellActivated(int row, int column);

private:
    Ui::BibliotecaDC *ui;
};
#endif // BIBLIOTECADC_H
