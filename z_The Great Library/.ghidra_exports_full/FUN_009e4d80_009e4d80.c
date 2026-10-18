// FUN_009e4d80 @ 009e4d80 body=[[009e4d80, 009e4e17]]


void FUN_009e4d80(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_00a840b0();
  FUN_0068f390();
  iVar1 = *(int *)(in_ECX + 0x84);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x88);
  *(undefined4 **)(in_ECX + 0x84) = puVar3;
  *(int *)(in_ECX + 0x88) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 0x80) = puVar3;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar3;
  }
  (**(code **)(*param_2 + 0x98))(*(undefined1 *)(in_ECX + 0x6c));
  (**(code **)(*param_2 + 100))(*(undefined4 *)(in_ECX + 0x494));
  return;
}

