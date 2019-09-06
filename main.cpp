#include <iostream>
#include "View.h"
#include "Model.h"
#include "Controller.h"
#include <memory>
int main() {
    // New Document
    DocumentModel model{};
    DocumentView view{model};
    Controller controller(model, view);
    //Import
    controller.ImportDocument("test.doc");
    //Export
    controller.ExportDocument("test2.doc");
    // Create Figure and adding to document
    auto line = std::shared_ptr<Figure> (new Line{Color{}, Coordinate{0,1}, Coordinate{0,2}});
    // Add Line
    controller.AddFigure(line);
    // Remove Line
    controller.RemoveFigure(line);
    return 0;
}
