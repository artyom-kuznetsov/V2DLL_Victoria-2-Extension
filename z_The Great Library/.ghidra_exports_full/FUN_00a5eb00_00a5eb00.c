// FUN_00a5eb00 @ 00a5eb00 body=[[00a5eb00, 00a5ec33]]


void FUN_00a5eb00(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x1c4);
  *(int *)(in_ECX + 0x1c4) = *(int *)(in_ECX + 0x18c);
  *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x1cc) + (iVar2 - *(int *)(in_ECX + 0x18c));
  *(int *)(in_ECX + 0x1c8) =
       *(int *)(in_ECX + 0x1c8) + (*(int *)(in_ECX + 0x1c0) - *(int *)(in_ECX + 0x188));
  *(int *)(in_ECX + 0x1c0) = *(int *)(in_ECX + 0x188);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(in_ECX + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(in_ECX + 0x1a0);
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x3c))(in_ECX + 0x16c);
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x20))
            (in_ECX + 0x150,*(undefined4 *)(in_ECX + 0x1ac),*(undefined4 *)(in_ECX + 0x1a8),
             *(undefined8 *)(in_ECX + 0x1c0),*(undefined8 *)(in_ECX + 0x1c8),
             *(undefined4 *)(in_ECX + 0x198),*(undefined4 *)(in_ECX + 0x19c),in_ECX + 0x1b0);
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x44))();
  iVar2 = *(int *)(in_ECX + 0x1c0);
  fVar1 = *(float *)(param_3 + 0x30);
  *(int *)(in_ECX + 0x1c0) = (int)fVar1;
  *(int *)(in_ECX + 0x1c8) = *(int *)(in_ECX + 0x1c8) + (iVar2 - (int)fVar1);
  iVar2 = *(int *)(in_ECX + 0x1c4);
  iVar3 = (int)((float)*(int *)(in_ECX + 0x1a4) - *(float *)(param_3 + 0x34));
  *(int *)(in_ECX + 0x1c4) = iVar3;
  *(int *)(in_ECX + 0x1cc) = *(int *)(in_ECX + 0x1cc) + (iVar2 - iVar3);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(in_ECX + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(in_ECX + 0x1a4);
  return;
}

