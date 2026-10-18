// FUN_008d7d40 @ 008d7d40 body=[[008d7d40, 008d7d7a]]


bool FUN_008d7d40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00519a40(*(undefined4 *)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  return 0 < (int)(piVar1[1] - *piVar1 & 0xfffffff8U);
}

