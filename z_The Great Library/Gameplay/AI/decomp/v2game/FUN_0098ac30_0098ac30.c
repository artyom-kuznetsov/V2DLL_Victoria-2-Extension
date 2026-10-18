// FUN_0098ac30 @ 0098ac30 body=[[0098ac30, 0098ac71]]


void FUN_0098ac30(int *param_1,char *param_2,undefined1 *param_3)

{
  char *in_EAX;
  int iVar1;
  
  if (in_EAX == param_2) {
    *param_1 = (int)param_3;
    return;
  }
  do {
    iVar1 = _toupper((int)*in_EAX);
    *param_3 = (char)iVar1;
    param_3 = param_3 + 1;
    in_EAX = in_EAX + 1;
  } while (in_EAX != param_2);
  *param_1 = (int)param_3;
  return;
}

