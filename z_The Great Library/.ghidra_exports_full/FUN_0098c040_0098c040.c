// FUN_0098c040 @ 0098c040 body=[[0098c040, 0098c0c6]]


void FUN_0098c040(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_ESI;
  undefined1 local_18 [20];
  
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 **)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_1 == (int *)0x0) || ((int *)*param_1 == (int *)0x0)) ||
     (puVar1 = *(undefined4 **)*param_1, puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  iVar2 = FUN_0098c380(local_18,uVar4,param_3,uVar3,param_6);
  unaff_ESI[2] = *(undefined4 *)(iVar2 + 4);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *unaff_ESI = *(undefined4 *)*param_1;
  }
  return;
}

