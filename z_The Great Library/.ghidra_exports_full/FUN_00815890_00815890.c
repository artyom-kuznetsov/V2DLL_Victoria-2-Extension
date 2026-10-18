// FUN_00815890 @ 00815890 body=[[00815890, 00815920]]


void FUN_00815890(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x24))
                    (*(int **)(unaff_ESI + 0x70),0,"ColorMapHeight");
  *(undefined4 *)(unaff_ESI + 0x94) = uVar1;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x24))
                    (*(int **)(unaff_ESI + 0x70),0,"ColorMapWidth");
  *(undefined4 *)(unaff_ESI + 0x98) = uVar1;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x24))
                    (*(int **)(unaff_ESI + 0x70),0,"ColorMapTextureHeight");
  *(undefined4 *)(unaff_ESI + 0x9c) = uVar1;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x24))
                    (*(int **)(unaff_ESI + 0x70),0,"ColorMapTextureWidth");
  *(undefined4 *)(unaff_ESI + 0xa0) = uVar1;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x24))
                    (*(int **)(unaff_ESI + 0x70),0,"MapWidth");
  *(undefined4 *)(unaff_ESI + 0xa4) = uVar1;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x24))
                    (*(int **)(unaff_ESI + 0x70),0,"MapHeight");
  *(undefined4 *)(unaff_ESI + 0xa8) = uVar1;
  return;
}

