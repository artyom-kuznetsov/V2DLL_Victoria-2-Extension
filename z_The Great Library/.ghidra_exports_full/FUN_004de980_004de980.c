// FUN_004de980 @ 004de980 body=[[004de980, 004de99e]]


void FUN_004de980(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_00e37c30;
  if ((*(char *)((int)in_EAX + 0x111) != '\0') && ((undefined4 *)in_EAX[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)in_EAX[1])(1);
  }
  return;
}

