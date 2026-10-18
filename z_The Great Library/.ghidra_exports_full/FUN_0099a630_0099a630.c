// FUN_0099a630 @ 0099a630 body=[[0099a630, 0099a686]]


void FUN_0099a630(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 *in_EDX;
  int iVar4;
  int *piVar5;
  
  iVar4 = in_EAX[1];
  iVar1 = *in_EAX;
  do {
    if (iVar4 == iVar1) {
      return;
    }
    iVar2 = *(int *)(*(int *)*in_EDX + iVar4 * 4);
    *(undefined4 *)(in_EDX[4] + iVar4 * 4) = 0;
    iVar3 = 0;
    if (0 < (int)in_EDX[3]) {
      piVar5 = (int *)in_EDX[1];
      do {
        if (iVar2 == *piVar5) {
          *(undefined4 *)(in_EDX[4] + iVar4 * 4) = *(undefined4 *)(in_EDX[2] + iVar3 * 4);
          break;
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < (int)in_EDX[3]);
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

