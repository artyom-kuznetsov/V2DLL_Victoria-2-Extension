// FUN_00416e40 @ 00416e40 body=[[00416e40, 00416e55]]


bool FUN_00416e40(void)

{
  char *in_EAX;
  
  if ((*in_EAX == 'R') && (in_EAX[1] == 'E')) {
    return in_EAX[2] == 'B';
  }
  return false;
}

