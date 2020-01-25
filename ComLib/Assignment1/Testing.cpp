// Shared.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>  
#include "ComLib.h"

using namespace std;

int nrOfMsg = 0;
int memSize = 0;
int msgSize = 0;
int delay = 0;

int indicator = 0;

void Producer();
void Consumer();
void Produce();
void Consume();

void Producer();
void Consumer();
void RandomMessageSize(int &r);
void Consume();
void Produce();
void gen_random(char *s, const int len);


int main(int argc, char** argv)
{
	memSize = stoi(argv[3]);
	delay = stoi(argv[2]);
	nrOfMsg = stoi(argv[4]);

	if (argv[5][0] == 'r')
	{
		indicator = 0;
	}
	else
	{
		indicator = 1;
		msgSize = stoi(argv[5]);
	}

	if (argv[1][0] == 'p')
	{
		Producer();
	}
	else
	{
		Consumer();
	}

	return 0;
}

void Producer()
{
	Produce();
}

void Consumer()
{
	Consume();
}

void Produce()
{
	string ssecret = "Secret";
	ComLib producer(ssecret, memSize, ComLib::ROLE::PRODUCER);

	int i = 0;

	while (i < nrOfMsg)
	{
		if (delay > 0)
		{
			Sleep(delay);
		}

		//if (indicator == 0)
		//{
		//	RandomMessageSize(msgSize);
		//}

		//char* message = new char[msgSize];
		//gen_random(message, msgSize);

		ComLib::INFO info;
		ComLib::MESH_V mesh;
		ComLib::LIGHT_T light;
		ComLib::CAMERA_T camera;
		ComLib::TRANSFORM_T transform;

		// MESH: ============================================

		//info.role = ComLib::MSG_ROLE::MESH;
		//info.variables[0] = 1;
		//info.variables[1] = 1;
		//info.variables[2] = 10;
		//info.variables[3] = 10;
		//info.variables[4] = 10;

		//char name[10] = "mesh01";
		//char path[10] = "lol/go";

		//size_t lenght = 0;

		//for (int i = 0; i < 10; i++) {
		//	mesh.mashName[i] = name[i];
		//	mesh.materialPath[i] = path[i];
		//}

		//lenght += 1020 + 1020;

		//for (int i = 0; i < 10; i++) {
		//	std::vector<float> x_y_z;
		//	std::vector<float> nx_ny_nz;
		//	std::vector<float> u_v;

		//	for (int j = 0; j < 3; j++) {
		//		x_y_z.push_back((float)(j + i));
		//		nx_ny_nz.push_back((float)(j + i + 1));
		//	}
		//	for (int j = 0; j < 2; j++) {
		//		u_v.push_back((float)(j + i));
		//	}
		//	mesh.vertex.push_back(x_y_z);
		//	lenght += sizeof(float) * 3;

		//	mesh.normals.push_back(nx_ny_nz);
		//	lenght += sizeof(float) * 3;

		//	mesh.uvs.push_back(u_v);
		//	lenght += sizeof(float) * 2;
		//}

		//ComLib::MSG_ROLE role = ComLib::MSG_ROLE::MESH;
		//int variables[8] = { 1, 1 , 10, 10, 10 };

		//if (producer.send(&info, &mesh, lenght))
		//{
		//	cout << "Mesh name: " << mesh.mashName << endl;
		//	cout << "Material path: " << mesh.materialPath << endl;
		//	cout << "Vertex count: " << 10 << endl;
		//	for (int i = 0; i < 10; i++) {
		//		cout << "Vertex " << i << ": ";
		//		for (int j = 0; j < 3; j++) {
		//			cout << mesh.vertex[i].at(j) << " ";
		//		}
		//		cout << endl;

		//		cout << "Normal " << i << ": ";
		//		for (int j = 0; j < 3; j++) {
		//			cout << mesh.normals[i].at(j) << " ";
		//		}
		//		cout << endl;

		//		cout << "UV " << i << ": ";
		//		for (int j = 0; j < 2; j++) {
		//			cout << mesh.uvs[i].at(j) << " ";
		//		}
		//		cout << endl;
		//	}

		 //LIGHT: ============================================

		//info.role = ComLib::MSG_ROLE::LIGHT;
		//info.variables[0] = 1;
		//info.variables[1] = 1;
		//info.variables[2] = 4;
		//info.variables[3] = 4;
		//info.variables[4] = 1;

		//char name[10] = "light01";
		//for (int i = 0; i < 10; i++) {
		//	light.lightName[i] = name[i];
		//}
		//light.type =ComLib::LIGHT_TYPE::POINT;
		//light.position[0] = 1.5f;
		//light.position[1] = 2.3f;
		//light.position[2] = 0.75f;
		//light.position[3] = 0.0f;
		//light.color[0] = 0.7f;
		//light.color[1] = 0.5f;
		//light.color[2] = 0.3f;
		//light.color[3] = 1.0f;
		//light.intensity = 10.0f;

		//size_t lenght = sizeof(ComLib::LIGHT_T);

		//if (producer.send(&info, &light, lenght)) {
		//	cout << "Light name: " << light.lightName << endl;
		//	cout << "Light Type::PointLight = " << light.type << endl;
		//	cout << "Light position: " << endl;
		//	for (int i = 0; i < 4; i++)
		//	{
		//		cout << light.position[i] << " ";
		//	}
		//	cout << endl;

		//	cout << "Light color: " << endl;
		//	for (int i = 0; i < 4; i++)
		//	{
		//		cout << light.color[i] << " ";
		//	}
		//	cout << endl;

		//	cout << "Light intensity: " << light.intensity << endl;
		//}
		//Camera: ============================================

		//info.role = ComLib::MSG_ROLE::CAMERA;
		//info.variables[0] = 1;
		//info.variables[1] = 1;

		//char name[10] = "camera01";
		//for (int i = 0; i < 10; i++) {
		//	camera.cameraName[i] = name[i];
		//}
		//cout << "Camera name: " << camera.cameraName << endl;
		//cout << "Camera matrix: " << endl;
		//for (int i = 0; i < 4; i++)
		//{
		//	for (int j = 0; j < 4; j++)
		//	{
		//		camera.cameraMatrix[i][j] = (j + i);
		//		cout << camera.cameraMatrix[i][j] << " ";
		//	}
		//	cout << endl;
		//}
		//size_t lenght = sizeof(ComLib::CAMERA_T);
		//if (producer.send(&info, &camera, lenght)) {
		//	cout << "sent" << endl;
		//}

		//Camera: ============================================

		info.role = ComLib::MSG_ROLE::TRANSFORM;
		info.variables[0] = 1;
		info.variables[1] = 1;

		char name[12] = "Transform01";
		for (int i = 0; i < 12; i++) {
			transform.transformName[i] = name[i];
		}
		cout << "Transform name: " << transform.transformName << endl;
		cout << "Transform matrix: " << endl;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				transform.transformMatrix[i][j] = (j + i);
				cout << transform.transformMatrix[i][j] << " ";
			}
			cout << endl;
		}
		size_t lenght = sizeof(ComLib::TRANSFORM_T);
		if (producer.send(&info, &transform, lenght)) {
			cout << "sent" << endl;
		}

		i++;
	}
	getchar();
	//delete[] message;
}


void Consume()
{
	string ssecret = "Secret";
	ComLib consumer(ssecret, memSize, ComLib::ROLE::CONSUMER);

	size_t receivedSize;
	int i = 0;
	cout << "pre-whileLoop" << endl;
	while (i < nrOfMsg)
	{
		cout << "in-whileLoop" << endl;
		if (delay > 0)
		{
			Sleep(delay);
		}

		int aMemSize = 0;

		if (indicator == 0)
		{
			aMemSize = (memSize * (1 << 20)) / 2;
		}
		else
		{
			aMemSize = msgSize;
		}

		//char* buff = new char[aMemSize];
		ComLib::INFO info;
		ComLib::MESH_V mesh;
		ComLib::LIGHT_T light;
		ComLib::CAMERA_T camera;
		ComLib::TRANSFORM_T transform;
		size_t lenght = 0;

		if (consumer.recv(&info, &mesh, &light, &camera, &transform, lenght))
		{
			cout << "recv success" << endl;
			cout << "role " << info.role << endl;
			if (info.role == ComLib::MSG_ROLE::MESH) {
				cout << "Mesh name: " << mesh.mashName << endl;
				cout << "Material path: " << mesh.materialPath << endl;
				cout << "Vertex count: " << info.variables[2] << endl;
				for (int i = 0; i < info.variables[2]; i++) {
					cout << "Vertex " << i << ": ";
					for (int j = 0; j < 3; j++) {
						cout << mesh.vertex[i].at(j) << " ";
					}
					cout << endl;

					cout << "Normal " << i << ": ";
					for (int j = 0; j < 3; j++) {
						cout << mesh.normals[i].at(j) << " ";
					}
					cout << endl;

					cout << "UV " << i << ": ";
					for (int j = 0; j < 2; j++) {
						cout << mesh.uvs[i].at(j) << " ";
					}
					cout << endl;
				}
			}

			else if (info.role == ComLib::MSG_ROLE::LIGHT)
			{
				cout << "Light name: " << light.lightName << endl;
				cout << "Light Type::PointLight = " << light.type << endl;
				cout << "Light position: " << endl;
				for (int i = 0; i < info.variables[2]; i++)
				{
					cout << light.position[i] << " ";
				}
				cout << endl;

				cout << "Light color: " << endl;
				for (int i = 0; i < info.variables[3]; i++)
				{
					cout << light.color[i] << " ";
				}
				cout << endl;

				cout << "Light intensity: " << light.intensity << endl;

				if (light.type != ComLib::LIGHT_TYPE::POINT)
				{
					cout << "Light direction: " << light.direction << endl;
				}
			
			}

			else if (info.role == ComLib::MSG_ROLE::CAMERA) {
				cout << "Camera name: " << camera.cameraName << endl;
				cout << "Camera matrix: " << endl;
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						cout << camera.cameraMatrix[i][j] << " ";
					}
					cout << endl;
				}
			}

			else if (info.role == ComLib::MSG_ROLE::TRANSFORM) {
				cout << "Transform name: " << transform.transformName << endl;
				cout << "Transform matrix: " << endl;
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						cout << transform.transformMatrix[i][j] << " ";
					}
					cout << endl;
				}
			}

		}
		else
		{
			cout << "recv failed" << endl;
		}
		//delete[] buff;
		cout << "Exitint" << endl;
		++i;
	}

}

void RandomMessageSize(int &r)
{
	r = (rand() % ((memSize * (1 << 20)) / 2)) + 1;

	if (r < 64)
	{
		r = 64;
	}

	int testSize = (r % 64);

	if (testSize != 0)
	{
		r = r * testSize;
		r = r / 2;
	}
}

// random character generation of "len" bytes.
// the pointer s must point to a big enough buffer to hold "len" bytes.
void gen_random(char *s, const int len)
{
	static const char alphanum[] = "0123456789""ABCDEFGHIJKLMNOPQRSTUVWXYZ""abcdefghijklmnopqrstuvwxyz";
	for (auto i = 0; i < len; ++i)
	{
		s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];

		s[len - 1] = 0;
	}
}