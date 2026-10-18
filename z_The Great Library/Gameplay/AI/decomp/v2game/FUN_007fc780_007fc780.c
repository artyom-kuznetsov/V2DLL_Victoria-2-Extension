// FUN_007fc780 @ 007fc780 body=[[007fc780, 007fc7bb]]


/* WARNING: Removing unreachable block (ram,0x007fc797) */
/* WARNING: Removing unreachable block (ram,0x007fc7a0) */
/* WARNING: Removing unreachable block (ram,0x007fc7b5) */

void FUN_007fc780(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x15a8);
  if (*(int *)(iVar1 + 0x10) != *(int *)(iVar1 + 0x14)) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x10);
  }
  return;
}

