// FUN_009e3600 @ 009e3600 body=[[009e3600, 009e367c]]


void FUN_009e3600(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  in_ECX[0x92] = param_2;
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x14) == 4)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x54))();
    for (puVar1 = (undefined4 *)in_ECX[-5]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      (**(code **)(*(int *)*puVar1 + 8))((float)iVar3);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((*(char *)((int)in_ECX + 0x4f) != '\0') &&
     (cVar2 = (**(code **)(*in_ECX + 8))(), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}

