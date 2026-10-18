// FUN_006315f0 @ 006315f0 body=[[006315f0, 0063168a]]


void FUN_006315f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  
  do {
    iVar3 = in_EAX * 2 + 2;
    if (param_1 <= iVar3) {
      if (iVar3 == param_1) {
        *(undefined4 *)(in_ECX + in_EAX * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
      }
      FUN_00631c30();
      return;
    }
    iVar1 = *(int *)(in_ECX + -4 + iVar3 * 4);
    iVar2 = *(int *)(in_ECX + iVar3 * 4);
    if ((iVar2 == param_3) && (iVar1 != param_3)) {
LAB_00631653:
      iVar3 = in_EAX * 2 + 1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x156c);
      if (((*(int *)(iVar2 + 0x14) == *(int *)(param_3 + 0x20)) &&
          (*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20))) ||
         (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))) goto LAB_00631653;
    }
    *(undefined4 *)(in_ECX + in_EAX * 4) = *(undefined4 *)(in_ECX + iVar3 * 4);
    in_EAX = iVar3;
  } while( true );
}

