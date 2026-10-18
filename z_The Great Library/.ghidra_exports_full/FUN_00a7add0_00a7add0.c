// FUN_00a7add0 @ 00a7add0 body=[[00a7add0, 00a7ade9] [00a7aded, 00a7adee]]


void FUN_00a7add0(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    (**(code **)(*DAT_012586cc + 8))(DAT_012586cc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  return;
}

