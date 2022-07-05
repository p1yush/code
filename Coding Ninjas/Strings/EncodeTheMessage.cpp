string encode(string &message)
{
    string ans;
    int count = 1;
    for(int i = 0; i < message.size(); i++) {
        if(message[i] == message[i + 1])
            count++;
        else {
            ans += message[i] + to_string(count);
            count = 1;
        }
    }
    return ans;
}