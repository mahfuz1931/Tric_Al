                                                 // One
                                                 
              cout << max({3 * (abs(a[0] - a[1])), 3 * (abs(a[2] - a[1])), 3 * a[0], 3 * a[2], a[0] + a[1] + a[2]});
                                      
                                      
                                                 //Two
                                           auto it=two.begin();
                                           auto x=*it;
                                           //auto x=it; লিখা যায় না, it দারা এড্রেস বুঝায় আর ডিরেক্ট এড্রেস এসাইন করা যায় না । তবে ভেলু এসাইন করা যায়
                                           auto iit=three.lower_bound({x.ss,x.ff});
