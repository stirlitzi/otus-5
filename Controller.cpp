#include "Controller.h"


Controller::Controller(DocumentModel &model, DocumentView &view): model_(model), view_(view) {}

void Controller::ExportDocument(const std::string &path) {
    model_.save_document_to_file(path);
}

void Controller::ImportDocument(const std::string &path) {
    model_.load_document(path);
    view_.render();
}

void Controller::AddFigure(std::shared_ptr<Figure> &figure) {
    model_.add_figure_to_document(figure);
    view_.render();
}

void Controller::RemoveFigure(std::shared_ptr<Figure> &figure) {
    model_.delete_figure_from_document(figure);
    view_.render();
}
