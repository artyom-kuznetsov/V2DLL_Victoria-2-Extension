// FUN_009b6760 @ 009b6760 body=[[009b6760, 009b67af]]


void FUN_009b6760(undefined2 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int in_ECX;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x110) + 0xd4))(local_c);
  fVar1 = *(float *)(iVar3 + 4);
  pfVar4 = (float *)(**(code **)(**(int **)(in_ECX + 0x110) + 0xd4))(local_14);
  fVar2 = *pfVar4;
  param_1[1] = (short)(int)fVar1;
  *param_1 = (short)(int)fVar2;
  return;
}

