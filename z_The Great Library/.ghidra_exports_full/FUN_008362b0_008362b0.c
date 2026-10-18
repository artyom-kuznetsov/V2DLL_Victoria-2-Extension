// FUN_008362b0 @ 008362b0 body=[[008362b0, 008363ef]]


/* WARNING: Removing unreachable block (ram,0x00836362) */

void FUN_008362b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x38) * 4) +
                           0xbe8) + *(int *)(param_2 + 4) * 4);
  if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xc) * 4) + 0x31) == '\0')
     && (4 < *(int *)(iVar1 + 0x40))) {
    FUN_00424810(0x18);
  }
  *param_1 = 0;
  return;
}

