// FUN_00a1def0 @ 00a1def0 body=[[00a1def0, 00a1df2b]]


void FUN_00a1def0(void)

{
  int in_EAX;
  undefined2 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  puVar1 = (undefined2 *)(in_EAX + 2);
  iVar2 = 0x10;
  do {
    *in_ECX = CONCAT31(CONCAT21(*puVar1,*(undefined1 *)((int)puVar1 + -1)),
                       *(undefined1 *)(puVar1 + -1));
    in_ECX = in_ECX + 1;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

