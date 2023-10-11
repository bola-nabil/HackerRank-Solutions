class User {
    constructor(username) {
        this.name = username
    }
    
    getUsername () {
        return this.name
    }
    
    setUsername(userName) {
        this.name = userName
    }
}

class ChatUser extends User {
    constructor(userName) {
        super(userName)
        this.count = 0
    }
    
    giveWarning() {
        let count = this.count + 1
        this.count = count
    }
    
    getWarningCount() {
        return this.count
    }
}