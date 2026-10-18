// FUN_00a438f0 @ 00a438f0 body=[[00a438f0, 00a43b62]]


void FUN_00a438f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x54);
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  *(undefined4 *)(unaff_ESI + 0xb0) = 0;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0;
  *(undefined4 *)(unaff_ESI + 0xb8) = 0;
  *(undefined4 *)(unaff_ESI + 0xbc) = 0;
  *(undefined4 *)(unaff_ESI + 0xc0) = 0;
  *(undefined4 *)(unaff_ESI + 0xc4) = 0;
  *(undefined4 *)(unaff_ESI + 200) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xf4))(piVar1,0,(undefined4 *)(unaff_ESI + 0x74));
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"FogStart");
    *(undefined4 *)(unaff_ESI + 0x88) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"FogEnd");
    *(undefined4 *)(unaff_ESI + 0x8c) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"CameraPosition");
    *(undefined4 *)(unaff_ESI + 0x78) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"LightDirection");
    *(undefined4 *)(unaff_ESI + 0x7c) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"LightColor");
    *(undefined4 *)(unaff_ESI + 0x80) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"LightAmbient");
    *(undefined4 *)(unaff_ESI + 0x84) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"HighAmbient");
    *(undefined4 *)(unaff_ESI + 0x90) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"Ambient");
    *(undefined4 *)(unaff_ESI + 0x94) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"Specular");
    *(undefined4 *)(unaff_ESI + 0x98) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"Diffuse");
    *(undefined4 *)(unaff_ESI + 0x9c) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"Emissive");
    *(undefined4 *)(unaff_ESI + 0xa0) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"Power");
    *(undefined4 *)(unaff_ESI + 0xa4) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"WorldMatrix");
    *(undefined4 *)(unaff_ESI + 0xa8) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"ViewMatrix");
    *(undefined4 *)(unaff_ESI + 0xac) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"WorldViewMatrix");
    *(undefined4 *)(unaff_ESI + 0xb8) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"ProjectionMatrix");
    *(undefined4 *)(unaff_ESI + 0xb0) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"WorldViewProjectionMatrix");
    *(undefined4 *)(unaff_ESI + 0xb4) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,&DAT_00e0bce4);
    *(undefined4 *)(unaff_ESI + 0xbc) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,&DAT_00e19384);
    *(undefined4 *)(unaff_ESI + 0xc0) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,&DAT_00e1939c);
    *(undefined4 *)(unaff_ESI + 0xc4) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,&DAT_00e1a710);
    *(undefined4 *)(unaff_ESI + 200) = uVar2;
    uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x54) + 0x24))
                      (*(int **)(unaff_ESI + 0x54),0,"BlendColor");
    *(undefined4 *)(unaff_ESI + 0xcc) = uVar2;
  }
  return;
}

