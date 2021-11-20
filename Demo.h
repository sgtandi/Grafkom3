#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4, VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, EBO9, texture9;
	float angle = 0;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	//lantai
	void BuildColoredPlane();
	//meja
	void Kakikiridepanmeja();
	void Kakikiribelakangmeja();
	void Kakikanandepanmeja();
	void Kakikananbelakangmeja();
	void Badanmeja();
	//buku
	void Cover();
	void Isi();
	//lantai
	void DrawColoredPlane();
	//meja
	void DrawKiridepan();
	void DrawKiribelakang();
	void DrawKanandepan();
	void DrawKananbelakang();
	void DrawBadan();
	//buku
	void DrawCover();
	void DrawIsi();
	//kamera
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};
