#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D screenTexture;

//void main()
//{
//    vec3 col = texture(screenTexture, TexCoords).rgb;
//    FragColor = vec4(1-col, 1.0);
//} 

void main()
{
    vec3 col = texture(screenTexture, TexCoords).rgb;
	float avg = 0.2126 * col.r + 0.7152 * col.g + 0.0722 * col.b;
    FragColor = vec4(avg, avg, avg, 1.0);
} 