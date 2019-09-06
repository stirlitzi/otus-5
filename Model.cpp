#include "Model.h"

DocumentModel::DocumentModel(const std::string &path) {
    load_document(path);
}

void DocumentModel::load_document(const std::string &path) {
    std::cout << "load document from path: " << path << std::endl;
    figures.clear();
}

void DocumentModel::add_figure_to_document(std::shared_ptr<Figure> &figure) {
    std::cout << "Adding " << figure->get_type() << "\n";
    figures.emplace_back(figure);
}

void DocumentModel::delete_figure_from_document(std::shared_ptr<Figure> &figure) {
    auto it_pos = std::find(figures.begin(), figures.end(), figure);
    if (it_pos != figures.end()) {
        std::cout << "removing figure: " << figure->get_type() << "\n";
        figures.erase(it_pos);
    }
}

void DocumentModel::save_document_to_file(const std::string& path) {
    std::cout << "save document to " << path << std::endl;
}

std::vector<std::string> DocumentModel::get_model_view() const{
    std::vector<std::string> temp_model;
//    temp_model.reserve(figures.size());
    for(const auto& i: figures){
        temp_model.emplace_back(i->get_view());
    }
    return temp_model;
}
