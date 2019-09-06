#include "Figure.h"
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#ifndef EDITOR_MODEL_H
#define EDITOR_MODEL_H

class DocumentModel {
public:
    // Empty Document
    DocumentModel() = default;

    // Load Documnet from file
    DocumentModel(const std::string &path);

    // Reload document with new path
    void load_document(const std::string &path);

    // Add figure to document
    void add_figure_to_document(std::shared_ptr<Figure> &figure);

    // Save document to file
    void save_document_to_file(const std::string& path);

    // Delete figure
    void delete_figure_from_document(std::shared_ptr<Figure> &figure);

    // Get View
    std::vector<std::string> get_model_view() const;


private:
    std::vector<std::shared_ptr<Figure>> figures;

};


#endif //EDITOR_MODEL_H
