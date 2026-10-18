// FUN_006e18c0 @ 006e18c0 body=[[006e18c0, 006e1959]]


void FUN_006e18c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_2 <= iVar3) break;
    cVar1 = FUN_006dda00(*(undefined4 *)(in_EAX + iVar3 * 8),*(undefined4 *)(in_EAX + 4 + iVar3 * 8)
                         ,*(undefined4 *)(in_EAX + -8 + iVar3 * 8),
                         *(undefined4 *)(in_EAX + -4 + iVar3 * 8));
    if (cVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(in_EAX + iVar2 * 8) = *(undefined4 *)(in_EAX + iVar3 * 8);
    *(undefined4 *)(in_EAX + 4 + iVar2 * 8) = *(undefined4 *)(in_EAX + 4 + iVar3 * 8);
    iVar2 = iVar3;
  }
  if (iVar3 == param_2) {
    *(undefined4 *)(in_EAX + iVar2 * 8) = *(undefined4 *)(in_EAX + -8 + param_2 * 8);
    *(undefined4 *)(in_EAX + 4 + iVar2 * 8) = *(undefined4 *)(in_EAX + -4 + param_2 * 8);
    iVar2 = param_2 + -1;
  }
  FUN_006e1c60(iVar2,param_1,param_3,param_4);
  return;
}

