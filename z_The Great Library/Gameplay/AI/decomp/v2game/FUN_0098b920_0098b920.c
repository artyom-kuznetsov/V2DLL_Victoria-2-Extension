// FUN_0098b920 @ 0098b920 body=[[0098b920, 0098b9f3]]


int FUN_0098b920(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 auStack_70 [27];
  
  piVar4 = *(int **)(in_ECX + 0x124);
  iVar7 = 0;
  while ((iVar3 = iVar7, *(int **)(in_ECX + 0x124) <= piVar4 && (piVar4 < *(int **)(in_ECX + 0x128))
         )) {
    cVar2 = (**(code **)(*(int *)*piVar4 + 0x3c))();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0xd4))(param_1,iVar7,0);
      piVar4 = piVar4 + 1;
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0xcc);
      puVar5 = (undefined4 *)(*piVar4 + 0xf8);
      puVar6 = auStack_70;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      (*pcVar1)(param_1,iVar7,auStack_70);
      (**(code **)(*param_1 + 0xd4))(param_1,iVar7,1);
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    }
  }
  for (; iVar3 < 8; iVar3 = iVar3 + 1) {
    (**(code **)(*param_1 + 0xd4))(param_1,iVar3,0);
  }
  return iVar7;
}

