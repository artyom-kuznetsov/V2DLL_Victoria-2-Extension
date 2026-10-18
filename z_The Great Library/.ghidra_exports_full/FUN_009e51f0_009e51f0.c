// FUN_009e51f0 @ 009e51f0 body=[[009e51f0, 009e52e9]]


void FUN_009e51f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int *local_8;
  
  FUN_00a840b0();
  piVar3 = param_2;
  FUN_0068f390();
  if (piVar3 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = piVar3 + 6;
  }
  iVar1 = *(int *)(in_ECX + 0x84);
  piVar4 = (int *)FUN_00aae9af(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = (int)local_8;
    piVar4[1] = iVar1;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x88);
  *(int **)(in_ECX + 0x84) = piVar4;
  *(int *)(in_ECX + 0x88) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(in_ECX + 0x80) = piVar4;
  }
  else {
    *(int **)(iVar1 + 8) = piVar4;
  }
  FUN_009e6810(param_1,&param_2);
  piVar4 = (int *)(**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar4 + 0x80))();
  piVar4 = (int *)(**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar4 + 0x74))(*(undefined4 *)(in_ECX + 0x494));
  (**(code **)(piVar3[6] + 0x98))(*(undefined1 *)(in_ECX + 0x6c));
  return;
}

