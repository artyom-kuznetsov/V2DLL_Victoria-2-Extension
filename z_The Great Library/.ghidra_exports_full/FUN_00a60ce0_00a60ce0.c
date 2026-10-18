// FUN_00a60ce0 @ 00a60ce0 body=[[00a60ce0, 00a60d74]]


void FUN_00a60ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined1 local_10 [4];
  undefined2 local_c;
  
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 100;
  *(undefined2 *)(unaff_ESI + 0x8c) = 0;
  local_c = (undefined2)in_EAX;
  *(undefined4 *)(unaff_ESI + 0x14) = in_EAX;
  *(undefined4 *)(unaff_ESI + 0xa8) = 1;
  iVar1 = FUN_00a8a820(local_10,param_1,param_2);
  *(int *)(unaff_ESI + 0x18) = iVar1;
  if (iVar1 == 0) {
    uVar2 = FUN_00a8a820(0,0xff,param_2);
    *(undefined4 *)(unaff_ESI + 0x18) = uVar2;
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x17cc) = 1;
  *(undefined4 *)(unaff_ESI + 0x94) = 10;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  return;
}

