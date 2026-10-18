// FUN_004cb370 @ 004cb370 body=[[004cb370, 004cb387] [004cb390, 004cb3bf]]


undefined4 FUN_004cb370(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  
  iVar2 = DAT_012588e8;
  piVar1 = *(int **)(in_EAX + 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    cVar3 = FUN_004bbd60(*(undefined4 *)(*(int *)(iVar2 + 0xacc) + *piVar1 * 4));
    if (cVar3 != '\0') break;
    piVar1 = (int *)piVar1[2];
  }
  return 1;
}

