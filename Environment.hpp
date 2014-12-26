#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

// Parent class
#include <QWidget>

// Member classes
#include <QHBoxLayout>
#include <VisGraphicsScene.hpp>
#include <VisGraphicsView.hpp>

// Foreign language includes

class Environment : public QWidget
{
    Q_OBJECT
public:
    friend void* prePaintNode(void*, void*, void*);
    friend void* preUnpaintNode(void*);
    friend void* prePaintEdge(void*, void*);
    friend void* preUnpaintEdge(void*, void*);
    friend void* prePaintArrow(void*, void*);
    friend void* preUnpaintArrow(void*, void*);
    friend void* preLabelNode(void*, void*);
    friend void* preLabelEdge(void*, void*, void*);
    friend void* preLabelArrow(void*, void*, void*);
    friend void* preColorNode(void*, void*, void*, void*, void*);
    friend void* preUncolorNode(void*);
    friend void* preColorEdge(void*, void*, void*, void*, void*, void*);
    friend void* preUncolorEdge(void*, void*);
    friend void* preColorArrow(void*, void*, void*, void*, void*, void*);
    friend void* preUncolorArrow(void*, void*);
    friend void* preColorNodeLabel(void*, void*, void*, void*, void*);
    friend void* preUncolorNodeLabel(void*);
    friend void* preColorEdgeLabel(void*, void*, void*, void*, void*, void*);
    friend void* preUncolorEdgeLabel(void*, void*);
    friend void* preColorArrowLabel(void*, void*, void*, void*, void*, void*);
    friend void* preUncolorArrowLabel(void*, void*);
    friend void* preWait(void*);
    friend void* preShowMessage(void*);

    friend void* visPosNode(void* id);
    friend void* visMoveNode(void* id, void* dx, void* dy);

    explicit Environment(QWidget *parent = 0);
    ~Environment();

    void evalString(QString);
    void evalFile(QString);
    void newGraph(VisGraphicsScene::GRAPH);
    void delGraph(VisGraphicsScene::GRAPH);

    QString addNodeCode(int, double, double);
    QString removeNodeCode(int);
    QString addEdgeCode(int,int);
    QString removeEdgeCode(int,int);
    QString addArrowCode(int,int);
    QString removeArrowCode(int,int);

    bool on_pause;

    VisGraphicsScene::GRAPH graphType() {return vis_scene->graph_type;}

    QPointF visPosNode(int id);


private:
    VisGraphicsScene* vis_scene;

    VisGraphicsView* vis_view;

    QHBoxLayout* ui_layout;

    void initForeign();

signals:
    // To VisMainWindow
    void visStepWait(QString);
    void visShowMessage(QString);

    // To VisGraphicsScene
    void visPaintNode(int id, double x, double y);
    void visUnpaintNode(int id);
    void visPaintEdge(int aid, int bid);
    void visUnpaintEdge(int aid, int bid);
    void visPaintArrow(int aid, int bid);
    void visUnpaintArrow(int aid, int bid);
    void visLabelNode(int id, QString);
    void visLabelEdge(int aid, int bid, QString);
    void visLabelArrow(int aid, int bid, QString);
    void visColorNode(int id, int r, int g, int b, int a);
    void visUncolorNode(int id);
    void visColorEdge(int aid, int bid, int r, int g, int b, int a);
    void visUncolorEdge(int aid, int bid);
    void visColorArrow(int aid, int bid, int r, int g, int b, int a);
    void visUncolorArrow(int aid, int bid);
    void visColorNodeLabel(int id, int r, int g, int b, int a);
    void visUncolorNodeLabel(int id);
    void visColorEdgeLabel(int aid, int bid, int r, int g, int b, int a);
    void visUncolorEdgeLabel(int aid, int bid);
    void visColorArrowLabel(int aid, int bid, int r, int g, int b, int a);
    void visUncolorArrowLabel(int aid, int bid);
    void visIncrementId();
    void visResetId();

    void visMoveNode(int id, double dx, double dy);


public slots:
    // From VisMainWindow
    void visChangeZoom(int);
    void visToolSelected(int);
    void visSetGraphType(int);
    void visRemoveSelection();
    void visCleanGraph();
    void visEraseGraph();
    void visUnlabelGraph();
    void visRunBipartiteness();
    void visRunSpanningTreeBFS();
    void visRunSpanningTreeDFS();
    void visRunPrim();
    void visRunKruskal();
    void visRunDijkstra();
    void visRunFloydWarshall();
    void visRunFordFulkerson();
    void visRunMinimumCostConstantFlowNC();
    void visRunMinimumCostConstantFlowSP();

private slots:
    // From VisGraphicsScene
    void visAddNode(double x, double y);
    void visRemoveNode(int id);
    void visAddEdge(int aid, int bid);
    void visRemoveEdge(int aid, int bid);
    void visAddArrow(int aid, int bid);
    void visRemoveArrow(int aid, int bid);
};

#endif // ENVIRONMENT_HPP
