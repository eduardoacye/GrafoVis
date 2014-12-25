#include "Environment.hpp"

#include <VisBipartiteness.hpp>
#include <VisSpanningTreeBFS.hpp>
#include <VisSpanningTreeDFS.hpp>
#include <VisPrim.hpp>
#include <VisKruskal.hpp>
#include <VisDijkstra.hpp>
#include <VisFloydWarshall.hpp>
#include <VisFordFulkerson.hpp>
#include <VisMinimumCostConstantFlowNC.hpp>
#include <VisMinimumCostConstantFlowSP.hpp>

#include <QtDebug>

static Environment* env = NULL;

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
//// Foreign language procedures
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

QString preToString(void* s)
{
    // change void* for the object type in the foreign language
    return "";
}

int preToInt(void* i)
{
    // change void* for the object type in the foreign language
    return 0;
}

double preToDouble(void* d)
{
    // change void* for the object type in the foreign language
    return 0.0;
}

void* prePaintNode(void* id, void* x, void* y)
{
    // TO DO
    //
    // a) change void* for the object type in the foreign language
    // b) convert id to int
    // c) convert x and y to double
    // d) call env->visPaintNode whith the converted values in the same
    //    order as this function
    // e) call env->visIncrementId()
    // f) return an unspecified value (none/null/void/...)
    //
    // The same kind of process is done in the rest of the pre* functions
    //
    return NULL;
}

void* preUnpaintNode(void* id)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* prePaintEdge(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUnpaintEdge(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* prePaintArrow(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUnpaintArrow(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preLabelNode(void* id, void* label)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preLabelEdge(void* aid, void* bid, void* label)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preLabelArrow(void* aid, void* bid, void* label)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preColorNode(void* id, void* r, void* g, void* b, void* a)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUncolorNode(void* id)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preColorEdge(void* aid, void* bid, void* r, void* g, void* b, void* a)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUncolorEdge(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preColorArrow(void* aid, void* bid, void* r, void* g, void* b, void* a)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUncolorArrow(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preColorNodeLabel(void* id, void* r, void* g, void* b, void* a)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUncolorNodeLabel(void* id)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preColorEdgeLabel(void* aid, void* bid, void* r, void* g, void* b, void* a)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUncolorEdgeLabel(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preColorArrowLabel(void* aid, void* bid, void* r, void* g, void* b, void* a)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preUncolorArrowLabel(void* aid, void* bid)
{
    // TO DO
    //
    // See prePaintNode
    //
    return NULL;
}

void* preWait(void* message)
{
    env->on_pause = true;
    env->visStepWait(preToString(message));
    while(env->on_pause){

    }
    return NULL;
}

void* preShowMessage(void* message)
{
    env->visShowMessage(preToString(message));
    return NULL;
}

void Environment::initForeign()
{
    // TO DO
    //
    // Initialize the foreign language runtime
    //
    // Expose the pre* procedures to the foreign environment
    //
    // Load the configuration and initialization files
    //
}

void Environment::evalString(QString code)
{
    // TO DO
    //
    // Evaluate the string of code
    //
}

void Environment::evalFile(QString path)
{
    // TO DO
    //
    // Evaluate the file from the filesystem
    // given a string with the file path
}

void Environment::newGraph(VisGraphicsScene::GRAPH type)
{
    // TO DO
    //
    // Define a new graph with the given type
    //
    switch(type){
    case VisGraphicsScene::UNDIRECTED:
        break;
    case VisGraphicsScene::DIRECTED:
        break;
    }
}

void Environment::delGraph(VisGraphicsScene::GRAPH type)
{
    // TO DO
    //
    // Remove all edges/arrows and vertices from the graph
    //
    switch(type){
    case VisGraphicsScene::UNDIRECTED:
        break;
    case VisGraphicsScene::DIRECTED:
        break;
    }
}

QString Environment::addNodeCode(int id, double x, double y)
{
    // TO DO
    //
    // Return a string to be evaluated for adding a vertex
    // with the given id and position.
    //
    return "";
}

QString Environment::removeNodeCode(int id)
{
    // TO DO
    //
    // Return a string to be evaluated for removing a vertex
    // with the given id
    //
    return "";
}

QString Environment::addEdgeCode(int aid, int bid)
{
    // TO DO
    //
    // Return a string to be evaluated for adding an edge with
    // the given "from" vertex id and "to" vertex id
    //
    return "";
}

QString Environment::removeEdgeCode(int aid, int bid)
{
    // TO DO
    //
    // Return a string to be evaluated for removing an edge with
    // the given "from" vertex id and "to" vertex id
    //
    return "";
}

QString Environment::addArrowCode(int aid, int bid)
{
    // TO DO
    //
    // Return a string to be evaluated for adding an arrow with
    // the given "from" vertex id and "to" vertex id
    //
    return "";
}

QString Environment::removeArrowCode(int,int)
{
    // TO DO
    //
    // Return a string to be evaluated for removing an arrow with
    // the given "from" vertex id and "to" vertex id
    //
    return "";
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
//// Class procedures
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
Environment::Environment(QWidget *parent) :
    QWidget(parent)
{
    initForeign();

    vis_scene = new VisGraphicsScene;

    vis_view = new VisGraphicsView(vis_scene);

    ui_layout = new QHBoxLayout;
    ui_layout->addWidget(vis_view, 0, 0);

    setLayout(ui_layout);

    // Conections
    {
        connect(vis_scene, SIGNAL(visNodeAdded(double,double)),
                this,      SLOT(visAddNode(double,double)));
        connect(vis_scene, SIGNAL(visNodeRemoved(int)),
                this,      SLOT(visRemoveNode(int)));
        connect(vis_scene, SIGNAL(visEdgeAdded(int,int)),
                this,      SLOT(visAddEdge(int,int)));
        connect(vis_scene, SIGNAL(visEdgeRemoved(int,int)),
                this,      SLOT(visRemoveEdge(int,int)));
        connect(vis_scene, SIGNAL(visArrowAdded(int,int)),
                this,      SLOT(visAddArrow(int,int)));
        connect(vis_scene, SIGNAL(visArrowRemoved(int,int)),
                this,      SLOT(visRemoveArrow(int,int)));

        connect(this,      SIGNAL(visPaintNode(int,double,double)),
                vis_scene, SLOT(visPaintNode(int,double,double)));
        connect(this,      SIGNAL(visUnpaintNode(int)),
                vis_scene, SLOT(visUnpaintNode(int)));
        connect(this,      SIGNAL(visPaintEdge(int,int)),
                vis_scene, SLOT(visPaintEdge(int,int)));
        connect(this,      SIGNAL(visUnpaintEdge(int,int)),
                vis_scene, SLOT(visUnpaintEdge(int,int)));
        connect(this,      SIGNAL(visPaintArrow(int,int)),
                vis_scene, SLOT(visPaintArrow(int,int)));
        connect(this,      SIGNAL(visUnpaintArrow(int,int)),
                vis_scene, SLOT(visUnpaintArrow(int,int)));

        connect(this,      SIGNAL(visColorNode(int,int,int,int,int)),
                vis_scene, SLOT(visColorNode(int,int,int,int,int)));
        connect(this,      SIGNAL(visUncolorNode(int)),
                vis_scene, SLOT(visUncolorNode(int)));
        connect(this,      SIGNAL(visColorEdge(int,int,int,int,int,int)),
                vis_scene, SLOT(visColorEdge(int,int,int,int,int,int)));
        connect(this,      SIGNAL(visUncolorEdge(int,int)),
                vis_scene, SLOT(visUncolorEdge(int,int)));
        connect(this,      SIGNAL(visColorArrow(int,int,int,int,int,int)),
                vis_scene, SLOT(visColorArrow(int,int,int,int,int,int)));
        connect(this,      SIGNAL(visUncolorArrow(int,int)),
                vis_scene, SLOT(visUncolorArrow(int,int)));
        connect(this,      SIGNAL(visColorNodeLabel(int,int,int,int,int)),
                vis_scene, SLOT(visColorNodeLabel(int,int,int,int,int)));
        connect(this,      SIGNAL(visUncolorNodeLabel(int)),
                vis_scene, SLOT(visUncolorNodeLabel(int)));
        connect(this,      SIGNAL(visColorEdgeLabel(int,int,int,int,int,int)),
                vis_scene, SLOT(visColorEdgeLabel(int,int,int,int,int,int)));
        connect(this,      SIGNAL(visUncolorEdgeLabel(int,int)),
                vis_scene, SLOT(visUncolorEdgeLabel(int,int)));
        connect(this,      SIGNAL(visColorArrowLabel(int,int,int,int,int,int)),
                vis_scene, SLOT(visColorArrowLabel(int,int,int,int,int,int)));
        connect(this,      SIGNAL(visUncolorArrowLabel(int,int)),
                vis_scene, SLOT(visUncolorArrowLabel(int,int)));

        connect(this,      SIGNAL(visIncrementId()),
                vis_scene, SLOT(visIncrementId()));
        connect(this,      SIGNAL(visResetId()),
                vis_scene, SLOT(visResetId()));
    }

    env = this;
    on_pause = false;
}

Environment::~Environment()
{
    delete vis_scene;
    delete vis_view;
    delete ui_layout;
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
//// Class Public Slots
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
void Environment::visChangeZoom(int percent)
{
    double zoom = percent/100.0;

    QMatrix old_matrix = vis_view->matrix();
    vis_view->resetMatrix();
    vis_view->translate(old_matrix.dx(),old_matrix.dy());
    vis_view->scale(zoom, zoom);
    vis_view->repaint();
}

void Environment::visToolSelected(int tool)
{
    vis_scene->mode = VisGraphicsScene::MODE(tool);
}

void Environment::visSetGraphType(int type)
{
    if(type == 1 and graphType() == VisGraphicsScene::UNDIRECTED){
        visEraseGraph();
        vis_scene->graph_type = VisGraphicsScene::DIRECTED;
        newGraph(VisGraphicsScene::DIRECTED);
    }else if(type == 0 and graphType() == VisGraphicsScene::DIRECTED){
        visEraseGraph();
        vis_scene->graph_type = VisGraphicsScene::UNDIRECTED;
        newGraph(VisGraphicsScene::UNDIRECTED);
    }
}

void Environment::visRemoveSelection()
{
    vis_scene->visRemoveSelected();
}

void Environment::visCleanGraph()
{
    vis_scene->visCleanGraph();
}

void Environment::visUnlabelGraph()
{
    vis_scene->visUnlabelGraph();
}

void Environment::visEraseGraph()
{
    delGraph(graphType());
    emit visResetId();
}

void Environment::visRunBipartiteness()
{
    VisBipartiteness dialog(this);
    dialog.exec();
}

void Environment::visRunSpanningTreeBFS()
{
    VisSpanningTreeBFS dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    int root_vertex = dialog.getRootVertex();
}

void Environment::visRunSpanningTreeDFS()
{
    VisSpanningTreeDFS dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    int root_vertex = dialog.getRootVertex();
}

void Environment::visRunPrim()
{
    VisPrim dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    int root_vertex = dialog.getRootVertex();
}

void Environment::visRunKruskal()
{
    VisKruskal dialog(this);
    dialog.exec();
}

void Environment::visRunDijkstra()
{
    VisDijkstra dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    int starting_vertex = dialog.getStartingVertex();
    int ending_vertex = dialog.getEndingVertex();
}

void Environment::visRunFloydWarshall()
{
    VisFloydWarshall dialog(this);
    dialog.exec();
}

void Environment::visRunFordFulkerson()
{
    VisFordFulkerson dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    QList<int> sources = dialog.getSources();
    QList<int> sinks   = dialog.getSinks();
    double     flow    = dialog.getFlow();

    if(flow == -1){  // El algoritmo deberá maximizar flujo

    }else{           // El algoritmo deberá obtener el flujo dado

    }
}

void Environment::visRunMinimumCostConstantFlowNC()
{
    VisMinimumCostConstantFlowNC dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    QList<int> sources = dialog.getSources();
    QList<int> sinks   = dialog.getSinks();
    double     flow    = dialog.getFlow();
}

void Environment::visRunMinimumCostConstantFlowSP()
{
    VisMinimumCostConstantFlowSP dialog(vis_scene->graph_node_ids(), this);
    dialog.exec();

    QList<int> sources = dialog.getSources();
    QList<int> sinks   = dialog.getSinks();
    double     flow    = dialog.getFlow();
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
//// Class Private Slots
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
void Environment::visAddNode(double x, double y)
{
    int id = vis_scene->id();
    QString code = addNodeCode(id, x, y);
    evalString(code);
}

void Environment::visRemoveNode(int id)
{
    QString code = removeNodeCode(id);
    evalString(code);
}

void Environment::visAddEdge(int aid, int bid)
{
    QString code = addEdgeCode(aid, bid);
    evalString(code);
}

void Environment::visRemoveEdge(int aid, int bid)
{
    QString code = removeEdgeCode(aid, bid);
    evalString(code);
}

void Environment::visAddArrow(int aid, int bid)
{
    QString code = addArrowCode(aid, bid);
    evalString(code);
}

void Environment::visRemoveArrow(int aid, int bid)
{
    QString code = removeArrowCode(aid, bid);
    evalString(code);
}
