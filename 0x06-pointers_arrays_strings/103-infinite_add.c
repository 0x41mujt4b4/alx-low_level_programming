nclude <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
			int i, j, k, l, m, n;
				int carry = 0;
					int val_n1, val_n2, sum;

						i = strlen(n1) - 1;
							j = strlen(n2) - 1;
								k = 0;

									while (i >= 0 || j >= 0)
												{
																if (k >= size_r - 1)
																				{
																									return (0);
																											}

																		val_n1 = i >= 0 ? n1[i] - '0' : 0;
																				val_n2 = j >= 0 ? n2[j] - '0' : 0;

																						sum = val_n1 + val_n2 + carry;
																								r[k] = sum % 10 + '0';
																										carry = sum / 10;

																												i--;
																														j--;
																																k++;
																																	}

										if (carry && k < size_r - 1)
													{
																	r[k] = carry + '0';
																			k++;
																				}

											if (k == size_r - 1)
														{
																		return (0);
																			}

												r[k] = '\0';

													l = 0;
														m = k - 1;

															while (l < m)
																		{
																						n = r[l];
																								r[l] = r[m];
																										r[m] = n;

																												l++;
																														m--;
																															}

																return (r);
}

