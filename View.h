#include "Model.h"
#ifndef EDITOR_VIEW_H
#define EDITOR_VIEW_H

class DocumentView{
public:
    DocumentView(const DocumentModel& model_ );
    // Render model
    void render();
private:
  const DocumentModel& model;


};

#endif //EDITOR_VIEW_H
