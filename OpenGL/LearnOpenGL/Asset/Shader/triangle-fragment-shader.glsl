#version 330 core
layout(location = 0) out vec4 FragColor;
			
in vec3 v_Position;
in vec3 v_Color;
uniform vec4 u_Color;

void main()
{
	//FragColor = u_Color;
	FragColor = vec4(v_Color, 1);
}