#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__

#include "Scene.h"
#include "Button.h"
#include "Condition.h"
#include "DecisionTree.h"
#include "FloatCondition.h"
#include "Label.h"
#include "Obstacle.h"
#include "PathNode.h"
#include "ship.h"
#include "SpaceShip.h"
#include "StateMachine.h"
#include "Target.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

	

private:
	// IMGUI Function
	void GUI_Function();
	std::string m_guiTitle;
	glm::vec2 m_mousePosition;
	bool m_isGridEnabled;

	Target* m_pTarget;
	Ship* m_pShip;
	Obstacle* m_pObstacle1;
	Obstacle* m_pObstacle2;
	Obstacle* m_pObstacle3;

	// State Machine properties

	Condition* m_pHasLOSCondition;
	Condition* m_pIsWithinDetectionRadiusCondition;
	FloatCondition* m_pIsWithinCombatRangeCondition;

	StateMachine* m_pStateMachine;
	void m_buildStateMachine();

	std::vector<PathNode*> m_pGrid;
	void m_buildGrid();
	bool m_CheckAgentLOS(Agent* agent, DisplayObject* object);
	
	void m_CheckPathNodeLOS();
	
	bool m_gridVisible;
	void m_toggleGrid(bool state);

	// lab 10
	PathNode* m_findClosestPathNode(Agent* agent);
};



#endif /* defined (__PLAY_SCENE__) */
