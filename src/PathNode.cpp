#include "PathNode.h"
#include "TextureManager.h"
#include "Util.h"
#include "Config.h"

PathNode::PathNode()
{
	setWidth(10);
	setHeight(10);
	getTransform()->position = glm::vec2(0.0f, 0.0f);
	getRigidBody()->isColliding = false;
	setType(PATH_NODE);

	setCurrentHeading(0.0f);// current facing angle
	setCurrentDirection(glm::vec2(1.0f, 0.0f)); // facing right

	setLOSDistance(1000.0f); 
	setLOSColour(glm::vec4(1, 0, 0, 1));
}

PathNode::~PathNode()
= default;

void PathNode::draw()
{
	// draw debug tile for positioning
	//Util::DrawRect(getTransform()->position - glm::vec2(Config::TILE_SIZE * 0.5f, Config::TILE_SIZE * 0.5f), Config::TILE_SIZE, Config::TILE_SIZE);

	// draw node
	Util::DrawRect(getTransform()->position - glm::vec2(5, 5), getWidth(), getHeight(), getLOSColour());
}

void PathNode::update()
{
}

void PathNode::clean()
{
}
