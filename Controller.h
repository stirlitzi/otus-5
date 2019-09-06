#include "Model.h"
#include "View.h"
#include "Figure.h"

#ifndef EDITOR_CONTROLLER_H
#define EDITOR_CONTROLLER_H


class Controller {
public:
    Controller(DocumentModel& model,DocumentView& view);
    void ImportDocument(const std::string& path);
    void ExportDocument(const std::string& path);
    void AddFigure(std::shared_ptr<Figure> &figure);
    void RemoveFigure(std::shared_ptr<Figure> &figure);
private:
    DocumentView view_;
    DocumentModel& model_;
};


#endif //EDITOR_CONTROLLER_H
